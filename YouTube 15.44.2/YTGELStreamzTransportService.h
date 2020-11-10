//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GSZStreamzTransportService-Protocol.h>

@class GIMMe, NSString;
@protocol YTEventLogger, YTIdentityProvider;

@interface YTGELStreamzTransportService : NSObject <GSZStreamzTransportService>
{
    id <YTEventLogger> _eventLogger;
    id <YTIdentityProvider> _identityProvider;
    _Bool _gelTransmitterEnabled;
    _Bool _hashingEnabled;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hashingEnabled; // @synthesize hashingEnabled=_hashingEnabled;
@property(nonatomic) _Bool gelTransmitterEnabled; // @synthesize gelTransmitterEnabled=_gelTransmitterEnabled;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)logStreamzValues:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

