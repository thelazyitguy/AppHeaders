//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GPBMessage.h>

@class ADCOMPlacement_DisplayPlacement_NativeFormat, GPBEnumArray, NSMutableArray;

@interface ADCOMPlacement_DisplayPlacement : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int ampren; // @dynamic ampren;
@property(retain, nonatomic) GPBEnumArray *apiArray; // @dynamic apiArray;
@property(readonly, nonatomic) unsigned long long apiArray_Count; // @dynamic apiArray_Count;
@property(nonatomic) int clktype; // @dynamic clktype;
@property(nonatomic) int context; // @dynamic context;
@property(retain, nonatomic) GPBEnumArray *ctypeArray; // @dynamic ctypeArray;
@property(readonly, nonatomic) unsigned long long ctypeArray_Count; // @dynamic ctypeArray_Count;
@property(retain, nonatomic) NSMutableArray *displayfmtArray; // @dynamic displayfmtArray;
@property(readonly, nonatomic) unsigned long long displayfmtArray_Count; // @dynamic displayfmtArray_Count;
@property(retain, nonatomic) NSMutableArray *eventArray; // @dynamic eventArray;
@property(readonly, nonatomic) unsigned long long eventArray_Count; // @dynamic eventArray_Count;
@property(retain, nonatomic) NSMutableArray *extArray; // @dynamic extArray;
@property(readonly, nonatomic) unsigned long long extArray_Count; // @dynamic extArray_Count;
@property(nonatomic) unsigned int h; // @dynamic h;
@property(nonatomic) _Bool hasNativefmt; // @dynamic hasNativefmt;
@property(retain, nonatomic) NSMutableArray *ifrbustArray; // @dynamic ifrbustArray;
@property(readonly, nonatomic) unsigned long long ifrbustArray_Count; // @dynamic ifrbustArray_Count;
@property(nonatomic) _Bool instl; // @dynamic instl;
@property(retain, nonatomic) NSMutableArray *mimeArray; // @dynamic mimeArray;
@property(readonly, nonatomic) unsigned long long mimeArray_Count; // @dynamic mimeArray_Count;
@property(retain, nonatomic) ADCOMPlacement_DisplayPlacement_NativeFormat *nativefmt; // @dynamic nativefmt;
@property(nonatomic) int pos; // @dynamic pos;
@property(nonatomic) _Bool priv; // @dynamic priv;
@property(nonatomic) int ptype; // @dynamic ptype;
@property(nonatomic) _Bool topframe; // @dynamic topframe;
@property(nonatomic) int unit; // @dynamic unit;
@property(nonatomic) unsigned int w; // @dynamic w;

@end
