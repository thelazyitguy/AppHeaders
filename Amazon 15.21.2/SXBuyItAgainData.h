//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SXProductData;

@interface SXBuyItAgainData : NSObject
{
    SXProductData *_product;
    NSArray *_header;
    NSArray *_searchTerm;
}

+ (id)buyItAgainDataWithModel:(id)arg1;
@property(readonly, nonatomic) NSArray *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(readonly, nonatomic) NSArray *header; // @synthesize header=_header;
@property(readonly, nonatomic) SXProductData *product; // @synthesize product=_product;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;

@end

