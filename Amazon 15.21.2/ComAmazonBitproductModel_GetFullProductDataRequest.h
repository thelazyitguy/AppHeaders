//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSNumber;

@interface ComAmazonBitproductModel_GetFullProductDataRequest : CoralModel <NSCoding, NSCopying>
{
    NSArray *_productIds;
    NSNumber *_fetchQuestions;
}

+ (id)listTypeForProperty:(id)arg1;
+ (id)type;
@property(retain, nonatomic) NSNumber *fetchQuestions; // @synthesize fetchQuestions=_fetchQuestions;
@property(retain, nonatomic) NSArray *productIds; // @synthesize productIds=_productIds;
- (void).cxx_destruct;

@end
