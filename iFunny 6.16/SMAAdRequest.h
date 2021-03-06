//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/NSCopying-Protocol.h>
#import <Funny/SMAAdRequestProtocol-Protocol.h>

@class NSDictionary, NSNumber, NSString, Protocol;

@interface SMAAdRequest : NSObject <NSCopying, SMAAdRequestProtocol>
{
    NSString *_publisherId;
    NSString *_adSpaceId;
    NSString *_sessionId;
    unsigned long long _adFormat;
    NSNumber *_adWidth;
    NSNumber *_adHeight;
    NSString *_mediationNetworkName;
    NSString *_mediationAdapterVersion;
    NSString *_mediationNetworkSDKVersion;
    NSDictionary *_keyValuePairs;
    NSDictionary *_objectExtras;
    NSString *_nativeTitleAsset;
    NSString *_nativeImagesAsset;
    NSString *_nativeDataAsset;
    Protocol *_associatedAdPresenterProtocol;
}

@property(retain, nonatomic) Protocol *associatedAdPresenterProtocol; // @synthesize associatedAdPresenterProtocol=_associatedAdPresenterProtocol;
@property(copy, nonatomic) NSString *nativeDataAsset; // @synthesize nativeDataAsset=_nativeDataAsset;
@property(copy, nonatomic) NSString *nativeImagesAsset; // @synthesize nativeImagesAsset=_nativeImagesAsset;
@property(copy, nonatomic) NSString *nativeTitleAsset; // @synthesize nativeTitleAsset=_nativeTitleAsset;
@property(copy, nonatomic) NSDictionary *objectExtras; // @synthesize objectExtras=_objectExtras;
@property(copy, nonatomic) NSDictionary *keyValuePairs; // @synthesize keyValuePairs=_keyValuePairs;
@property(copy, nonatomic) NSString *mediationNetworkSDKVersion; // @synthesize mediationNetworkSDKVersion=_mediationNetworkSDKVersion;
@property(copy, nonatomic) NSString *mediationAdapterVersion; // @synthesize mediationAdapterVersion=_mediationAdapterVersion;
@property(copy, nonatomic) NSString *mediationNetworkName; // @synthesize mediationNetworkName=_mediationNetworkName;
@property(copy, nonatomic) NSNumber *adHeight; // @synthesize adHeight=_adHeight;
@property(copy, nonatomic) NSNumber *adWidth; // @synthesize adWidth=_adWidth;
@property(nonatomic) unsigned long long adFormat; // @synthesize adFormat=_adFormat;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *adSpaceId; // @synthesize adSpaceId=_adSpaceId;
@property(copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)maxAdContentRating;
- (id)httpsOnly;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

