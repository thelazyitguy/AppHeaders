//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class ASMResourceKey, NSMutableArray, NSString;

@interface ASMCarouselBlock : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasItemWidth; // @dynamic hasItemWidth;
@property(nonatomic) _Bool hasItemsType; // @dynamic hasItemsType;
@property(nonatomic) _Bool hasTextHorizontalAlignment; // @dynamic hasTextHorizontalAlignment;
@property(nonatomic) _Bool hasViewAllTarget; // @dynamic hasViewAllTarget;
@property(nonatomic) _Bool hasViewAllText; // @dynamic hasViewAllText;
@property(nonatomic) int itemWidth; // @dynamic itemWidth;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;
@property(nonatomic) int itemsType; // @dynamic itemsType;
@property(nonatomic) int textHorizontalAlignment; // @dynamic textHorizontalAlignment;
@property(retain, nonatomic) ASMResourceKey *viewAllTarget; // @dynamic viewAllTarget;
@property(copy, nonatomic) NSString *viewAllText; // @dynamic viewAllText;

@end
