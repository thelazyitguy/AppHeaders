//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class ADDONSBorderStyle, ADDONSIdentifier, ADDONSOnClick, NSMutableArray, NSString;

@interface ADDONSGrid : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ADDONSBorderStyle *borderStyle; // @dynamic borderStyle;
@property(nonatomic) _Bool hasBorderStyle; // @dynamic hasBorderStyle;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasNumColumns; // @dynamic hasNumColumns;
@property(nonatomic) _Bool hasOnClick; // @dynamic hasOnClick;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) ADDONSIdentifier *id_p; // @dynamic id_p;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;
@property(nonatomic) int numColumns; // @dynamic numColumns;
@property(retain, nonatomic) ADDONSOnClick *onClick; // @dynamic onClick;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
