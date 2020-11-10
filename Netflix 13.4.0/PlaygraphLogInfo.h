//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/NFPlaybackLoggerAuxiliaryLogInfo-Protocol.h>

@class NSDictionary, NSString;

@interface PlaygraphLogInfo : NSObject <NFPlaybackLoggerAuxiliaryLogInfo>
{
    NSDictionary *_logInfo;
}

+ (id)supportedTypes;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *logInfo; // @synthesize logInfo=_logInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)appendLogInfoToLogBlob:(id)arg1 forType:(id)arg2;
- (_Bool)shouldProvideAuxiliaryLogInfoForType:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

