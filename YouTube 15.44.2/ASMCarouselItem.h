//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class ASMImage, ASMResourceKey, ASMSpecialDescription, GTPColor, NSMutableArray, NSString;

@interface ASMCarouselItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GTPColor *descriptionColor; // @dynamic descriptionColor;
@property(retain, nonatomic) NSMutableArray *descriptionsArray; // @dynamic descriptionsArray;
@property(readonly, nonatomic) unsigned long long descriptionsArray_Count; // @dynamic descriptionsArray_Count;
@property(nonatomic) _Bool elevate; // @dynamic elevate;
@property(nonatomic) _Bool hasDescriptionColor; // @dynamic hasDescriptionColor;
@property(nonatomic) _Bool hasElevate; // @dynamic hasElevate;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasSpecialDescription; // @dynamic hasSpecialDescription;
@property(nonatomic) _Bool hasTarget; // @dynamic hasTarget;
@property(retain, nonatomic) ASMImage *image; // @dynamic image;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(retain, nonatomic) ASMSpecialDescription *specialDescription; // @dynamic specialDescription;
@property(retain, nonatomic) ASMResourceKey *target; // @dynamic target;
@property(retain, nonatomic) NSMutableArray *textEntriesArray; // @dynamic textEntriesArray;
@property(readonly, nonatomic) unsigned long long textEntriesArray_Count; // @dynamic textEntriesArray_Count;
@property(retain, nonatomic) NSMutableArray *titlesArray; // @dynamic titlesArray;
@property(readonly, nonatomic) unsigned long long titlesArray_Count; // @dynamic titlesArray_Count;

@end

