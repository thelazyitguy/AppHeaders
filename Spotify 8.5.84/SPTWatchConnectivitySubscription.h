//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTWatchConnectivitySubscriber;

@interface SPTWatchConnectivitySubscription : NSObject
{
    id <SPTWatchConnectivitySubscriber> _subscriber;
    NSString *_topic;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) __weak id <SPTWatchConnectivitySubscriber> subscriber; // @synthesize subscriber=_subscriber;
- (id)initWithSubscriber:(id)arg1 topic:(id)arg2;

@end
