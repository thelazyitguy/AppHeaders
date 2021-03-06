//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface DMSResolvedContent : NSObject
{
    NSArray *_resolvedContentItems;
    NSDictionary *_rawResolvedContent;
    NSDictionary *_productDetails;
    NSString *_correlationKey;
}

@property(readonly, retain, nonatomic) NSString *correlationKey; // @synthesize correlationKey=_correlationKey;
@property(readonly, copy, nonatomic) NSDictionary *productDetails; // @synthesize productDetails=_productDetails;
@property(readonly, copy, nonatomic) NSDictionary *rawResolvedContent; // @synthesize rawResolvedContent=_rawResolvedContent;
@property(readonly, copy, nonatomic) NSArray *resolvedContentItems; // @synthesize resolvedContentItems=_resolvedContentItems;
- (void).cxx_destruct;
- (id)contentItemsForCategory:(unsigned long long)arg1;
- (id)initWithSynthesizedPayoffForPayload:(id)arg1 resolver:(id)arg2;
- (id)initWithPayload:(id)arg1 resolveData:(id)arg2;

@end

