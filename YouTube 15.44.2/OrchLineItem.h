//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, OrchImageWithCaption;

@interface OrchLineItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool fullWidth; // @dynamic fullWidth;
@property(nonatomic) _Bool hasFullWidth; // @dynamic hasFullWidth;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(retain, nonatomic) OrchImageWithCaption *image; // @dynamic image;
@property(retain, nonatomic) NSMutableArray *infoMessageArray; // @dynamic infoMessageArray;
@property(readonly, nonatomic) unsigned long long infoMessageArray_Count; // @dynamic infoMessageArray_Count;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSMutableArray *subValueArray; // @dynamic subValueArray;
@property(readonly, nonatomic) unsigned long long subValueArray_Count; // @dynamic subValueArray_Count;
@property(nonatomic) int type; // @dynamic type;
@property(copy, nonatomic) NSString *value; // @dynamic value;

@end

