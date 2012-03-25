//
// Generated file, do not edit! Created by opp_msgc 4.1 from applications/flow/flow_message.msg.
//

#ifndef _FLOW_MESSAGE_M_H_
#define _FLOW_MESSAGE_M_H_

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
#include "FlowExporter.h"
// }}



/**
 * Class generated from <tt>applications/flow/flow_message.msg</tt> by opp_msgc.
 * <pre>
 * packet Flow_Message {
 *     Flow flow;
 * }
 * </pre>
 */
class REASE_API Flow_Message : public ::cPacket
{
  protected:
    ::Flow flow_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Flow_Message&);

  public:
    Flow_Message(const char *name=NULL, int kind=0);
    Flow_Message(const Flow_Message& other);
    virtual ~Flow_Message();
    Flow_Message& operator=(const Flow_Message& other);
    virtual Flow_Message *dup() const {return new Flow_Message(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual Flow& getFlow();
    virtual const Flow& getFlow() const {return const_cast<Flow_Message*>(this)->getFlow();}
    virtual void setFlow(const Flow& flow_var);
};

inline void doPacking(cCommBuffer *b, Flow_Message& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Flow_Message& obj) {obj.parsimUnpack(b);}


#endif // _FLOW_MESSAGE_M_H_
