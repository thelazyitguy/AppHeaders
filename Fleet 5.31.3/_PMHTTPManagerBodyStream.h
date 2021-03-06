//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSInputStream.h>

#import <PMHTTP/NSStreamDelegate-Protocol.h>

@class NSString;

@interface _PMHTTPManagerBodyStream : NSInputStream <NSStreamDelegate>
{
    // Error parsing type: {atomic<NSStreamStatus>="__a_"{__cxx_atomic_impl<NSStreamStatus, std::__1::__cxx_atomic_base_impl<NSStreamStatus> >="__a_value"AQ}}, name: _streamStatus
    // Error parsing type: {atomic<void *>="__a_"{__cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> >="__a_value"A^v}}, name: _delegate
    // Error parsing type: {atomic<NSStreamStatus>="__a_"{__cxx_atomic_impl<NSStreamStatus, std::__1::__cxx_atomic_base_impl<NSStreamStatus> >="__a_value"AQ}}, name: _lastStatus
    struct mutex _mutex;
    CDUnknownBlockType _handler;
    struct map<CF<__CFRunLoop *>, NSMutableSet<NSString *>*, std::__1::less<CF<__CFRunLoop *>>, std::__1::allocator<std::__1::pair<const CF<__CFRunLoop *>, NSMutableSet<NSString *>*>>> _runLoops;
    struct __CFRunLoopSource *_rlSource;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)signalSource;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)close;
- (void)open;
- (unsigned long long)streamStatus;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)init;
- (id)initWithHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

