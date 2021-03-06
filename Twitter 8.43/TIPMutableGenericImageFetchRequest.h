//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterImagePipeline/TIPGenericImageFetchRequest.h>

#import <TwitterImagePipeline/TIPMutableTargetSizingImageFetchRequest-Protocol.h>

@class NSDictionary, NSString, NSURL;
@protocol TIPImageFetchTransformer;

@interface TIPMutableGenericImageFetchRequest : TIPGenericImageFetchRequest <TIPMutableTargetSizingImageFetchRequest>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSDictionary *decoderConfigMap; // @dynamic decoderConfigMap;
@property(copy, nonatomic) CDUnknownBlockType imageRequestAuthorizationBlock; // @dynamic imageRequestAuthorizationBlock;
@property(copy, nonatomic) CDUnknownBlockType imageRequestHydrationBlock; // @dynamic imageRequestHydrationBlock;
@property(nonatomic) long long loadingSources; // @dynamic loadingSources;
@property(retain, nonatomic) id <TIPImageFetchTransformer> transformer; // @dynamic transformer;
@property(copy, nonatomic) NSDictionary *progressiveLoadingPolicies; // @dynamic progressiveLoadingPolicies;
@property(nonatomic) long long options; // @dynamic options;
@property(nonatomic) double timeToLive; // @dynamic timeToLive;
@property(nonatomic) long long targetContentMode; // @dynamic targetContentMode;
@property(nonatomic) struct CGSize targetDimensions; // @dynamic targetDimensions;
@property(copy, nonatomic) NSString *imageIdentifier; // @dynamic imageIdentifier;
@property(retain, nonatomic) NSURL *imageURL; // @dynamic imageURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

