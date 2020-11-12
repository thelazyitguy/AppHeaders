//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GSCProfileIdentity, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GSCProfileBuilder : NSObject
{
    NSMutableDictionary *_profileDataMap;
    NSObject<OS_dispatch_queue> *_dataAccessQueue;
    GSCProfileIdentity *_identity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *profileDataMap; // @synthesize profileDataMap=_profileDataMap;
@property(retain, nonatomic) GSCProfileIdentity *identity; // @synthesize identity=_identity;
- (id)build;
- (void)addData:(id)arg1;
- (id)init;

@end
