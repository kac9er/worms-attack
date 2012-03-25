//
// Generated file, do not edit! Created by opp_msgc 4.1 from applications/generic/GenericApplicationMessage.msg.
//

#ifndef _GENERICAPPLICATIONMESSAGE_M_H_
#define _GENERICAPPLICATIONMESSAGE_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0401
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// dll export symbol
#ifndef REASE_API 
#  if defined(REASE_EXPORT)
#    define REASE_API  OPP_DLLEXPORT
#  elif defined(REASE_IMPORT)
#    define REASE_API  OPP_DLLIMPORT
#  else
#    define REASE_API 
#  endif
#endif

// cplusplus {{
#include "INETDefs.h"
#include "ReaSEDefs.h"
// }}



/**
 * Class generated from <tt>applications/generic/GenericApplicationMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet GenericApplicationMessage
 * {
 *     int replyLength; 
 *     int replyPerRequest; 
 *     double timeToRespond; 
 *     bool last; 
 *     int packetNumber; 
 * }
 * </pre>
 */
class REASE_API GenericApplicationMessage : public ::cPacket
{
  protected:
    int replyLength_var;
    int replyPerRequest_var;
    double timeToRespond_var;
    bool last_var;
    int packetNumber_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const GenericApplicationMessage&);

  public:
    GenericApplicationMessage(const char *name=NULL, int kind=0);
    GenericApplicationMessage(const GenericApplicationMessage& other);
    virtual ~GenericApplicationMessage();
    GenericApplicationMessage& operator=(const GenericApplicationMessage& other);
    virtual GenericApplicationMessage *dup() const {return new GenericApplicationMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getReplyLength() const;
    virtual void setReplyLength(int replyLength_var);
    virtual int getReplyPerRequest() const;
    virtual void setReplyPerRequest(int replyPerRequest_var);
    virtual double getTimeToRespond() const;
    virtual void setTimeToRespond(double timeToRespond_var);
    virtual bool getLast() const;
    virtual void setLast(bool last_var);
    virtual int getPacketNumber() const;
    virtual void setPacketNumber(int packetNumber_var);
};

inline void doPacking(cCommBuffer *b, GenericApplicationMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, GenericApplicationMessage& obj) {obj.parsimUnpack(b);}


#endif // _GENERICAPPLICATIONMESSAGE_M_H_