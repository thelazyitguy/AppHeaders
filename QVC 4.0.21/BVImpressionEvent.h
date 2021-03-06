//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BVSDK/BVAnalyticEvent-Protocol.h>

@class NSDictionary, NSString;

@interface BVImpressionEvent : NSObject <BVAnalyticEvent>
{
    NSDictionary *additionalParams;
    NSString *_productId;
    NSString *_contentId;
    long long _bvProduct;
    NSString *_categoryId;
    NSString *_brand;
    long long _contentType;
}

@property(readonly, nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(readonly, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(readonly, nonatomic) long long bvProduct; // @synthesize bvProduct=_bvProduct;
@property(readonly, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(readonly, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSDictionary *additionalParams; // @synthesize additionalParams;
- (void).cxx_destruct;
- (id)toRaw;
- (id)initWithProductId:(id)arg1 withContentId:(id)arg2 withCategoryId:(id)arg3 withProductType:(long long)arg4 withContentType:(long long)arg5 withBrand:(id)arg6 withAdditionalParams:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

