//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1PlayerSessionProducible-Protocol.h>

@class NSDictionary, NSString, TAVAnalyticsMediaIdentifier, TFSTwitterEntityMedia, TFSTwitterPromotedContent, TVDIAnalyticsOwnerIdentifier;

@interface T1PlayerMediaEntitySessionProducible : NSObject <T1PlayerSessionProducible>
{
    TFSTwitterEntityMedia *_mediaEntity;
    TAVAnalyticsMediaIdentifier *_contentMediaIdentifier;
    TVDIAnalyticsOwnerIdentifier *_ownerIdentifier;
    NSDictionary *_baseScribeItem;
    TFSTwitterPromotedContent *_promotedContent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFSTwitterPromotedContent *promotedContent; // @synthesize promotedContent=_promotedContent;
@property(readonly, nonatomic) NSDictionary *baseScribeItem; // @synthesize baseScribeItem=_baseScribeItem;
@property(readonly, nonatomic) TVDIAnalyticsOwnerIdentifier *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
@property(readonly, nonatomic) TAVAnalyticsMediaIdentifier *contentMediaIdentifier; // @synthesize contentMediaIdentifier=_contentMediaIdentifier;
@property(readonly, nonatomic) TFSTwitterEntityMedia *mediaEntity; // @synthesize mediaEntity=_mediaEntity;
- (id)produceSessionForConfiguration:(id)arg1 account:(id)arg2 playbackObservers:(id)arg3 initialScribeContext:(id)arg4;
- (_Bool)canProducePlayerSessionWithAccount:(id)arg1;
- (id)init;
- (id)initWithMediaEntity:(id)arg1 contentMediaIdentifier:(id)arg2 ownerIdentifier:(id)arg3 baseScribeItem:(id)arg4 promotedContent:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

