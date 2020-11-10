//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSStreamDelegate-Protocol.h>

@class FIRMessagingPacketQueue, NSInputStream, NSMutableData, NSOutputStream, NSRunLoop, NSString;
@protocol FIRMessagingSecureSocketDelegate;

@interface FIRMessagingSecureSocket : NSObject <NSStreamDelegate>
{
    _Bool _isVersionSent;
    _Bool _isVersionReceived;
    _Bool _isInStreamOpen;
    _Bool _isOutStreamOpen;
    BOOL _currentProtoTypeBeingSent;
    id <FIRMessagingSecureSocketDelegate> _delegate;
    unsigned long long _state;
    NSInputStream *_inStream;
    NSOutputStream *_outStream;
    NSMutableData *_inputBuffer;
    unsigned long long _inputBufferLength;
    NSMutableData *_outputBuffer;
    unsigned long long _outputBufferLength;
    FIRMessagingPacketQueue *_packetQueue;
    NSRunLoop *_runLoop;
    NSString *_currentRmqIdBeingSent;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL currentProtoTypeBeingSent; // @synthesize currentProtoTypeBeingSent=_currentProtoTypeBeingSent;
@property(retain, nonatomic) NSString *currentRmqIdBeingSent; // @synthesize currentRmqIdBeingSent=_currentRmqIdBeingSent;
@property(retain, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
@property(nonatomic) _Bool isOutStreamOpen; // @synthesize isOutStreamOpen=_isOutStreamOpen;
@property(nonatomic) _Bool isInStreamOpen; // @synthesize isInStreamOpen=_isInStreamOpen;
@property(nonatomic) _Bool isVersionReceived; // @synthesize isVersionReceived=_isVersionReceived;
@property(nonatomic) _Bool isVersionSent; // @synthesize isVersionSent=_isVersionSent;
@property(retain, nonatomic) FIRMessagingPacketQueue *packetQueue; // @synthesize packetQueue=_packetQueue;
@property(nonatomic) unsigned long long outputBufferLength; // @synthesize outputBufferLength=_outputBufferLength;
@property(retain, nonatomic) NSMutableData *outputBuffer; // @synthesize outputBuffer=_outputBuffer;
@property(nonatomic) unsigned long long inputBufferLength; // @synthesize inputBufferLength=_inputBufferLength;
@property(retain, nonatomic) NSMutableData *inputBuffer; // @synthesize inputBuffer=_inputBuffer;
@property(retain, nonatomic) NSOutputStream *outStream; // @synthesize outStream=_outStream;
@property(retain, nonatomic) NSInputStream *inStream; // @synthesize inStream=_inStream;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <FIRMessagingSecureSocketDelegate> delegate; // @synthesize delegate=_delegate;
- (void)performWrite;
- (unsigned long long)processCurrentInputBuffer:(id)arg1 outOffset:(unsigned long long *)arg2;
- (_Bool)performRead;
- (void)closeStream:(id)arg1;
- (void)openStream:(id)arg1 isVOIPStream:(_Bool)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)sendData:(id)arg1 withTag:(BOOL)arg2 rmqId:(id)arg3;
- (void)disconnect;
- (void)connectToHost:(id)arg1 port:(unsigned long long)arg2 onRunLoop:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
