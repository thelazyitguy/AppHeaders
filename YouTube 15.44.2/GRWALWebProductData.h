//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface GRWALWebProductData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool authUserEnabled; // @dynamic authUserEnabled;
@property(nonatomic) _Bool googleOwnedProduct; // @dynamic googleOwnedProduct;
@property(retain, nonatomic) NSMutableArray *mappingArray; // @dynamic mappingArray;
@property(readonly, nonatomic) unsigned long long mappingArray_Count; // @dynamic mappingArray_Count;
@property(copy, nonatomic) NSString *productId; // @dynamic productId;

@end

