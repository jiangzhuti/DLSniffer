#ifndef SNIFFER_MANAGER_H
#define SNIFFER_MANAGER_H

#include <QObject>
#include <QList>
#include <tins/tins.h>
#include "utils/queue.h"
#include "pkt_capture.h"
#include "pkt_processor.h"


class sniffer_manager : public QObject
{
        Q_OBJECT
    public:
        explicit sniffer_manager(QObject *parent = 0);
        ~sniffer_manager();
        bool init_sniffer();
        void release_sniffer();
        void start_capture();
        void stop_capture();
        void set_filter(const char *flt);
        void set_nif(Tins::NetworkInterface nif);
        void set_promisc(bool b);
        void add_http_sniffer();
        void clear_sniffer();
        //should have a rfmon option for 802.11 mac!
        //void set_rfmon(bool b);
        Tins::NetworkInterface get_nif();

        void destroy_pkt_info_list();

    signals:
        void new_sniffer_result(QString &protocol, QString &site, QString &username, QString &password);
    public slots:
    public:
        pkt_processor *pp_thrd;
        QList<pkt_info_t *> pkt_info_list;
    private:
        Tins::Sniffer *sniffer;
        Tins::SnifferConfiguration sconf;
        Tins::NetworkInterface nif;
        pkt_capture *pc_thrd;
        queue_t *pkt_queue;

};

#endif // SNIFFER_MANAGER_H
