//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCKMDNSDiscoveryOptions, NSSet;
@protocol GCKMDNSClientListener;

__attribute__((visibility("hidden")))
@interface GCKMDNSListenerEntry : NSObject
{
    NSSet *_subtypes;
    GCKMDNSDiscoveryOptions *_discoveryOptions;
    id <GCKMDNSClientListener> _listener;
}

@property(readonly, nonatomic) id <GCKMDNSClientListener> listener; // @synthesize listener=_listener;
@property(readonly, copy, nonatomic) GCKMDNSDiscoveryOptions *discoveryOptions; // @synthesize discoveryOptions=_discoveryOptions;
@property(readonly, nonatomic) NSSet *subtypes; // @synthesize subtypes=_subtypes;
- (void).cxx_destruct;
- (id)initWithListener:(id)arg1 subtypes:(id)arg2 discoveryOptions:(id)arg3;

@end

