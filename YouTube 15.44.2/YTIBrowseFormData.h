//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTIUnpluggedBrowseFormData, YTIVideoFilterFormData;

@interface YTIBrowseFormData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int dataOneOfCase; // @dynamic dataOneOfCase;
@property(retain, nonatomic) NSMutableArray *impressionValuesArray; // @dynamic impressionValuesArray;
@property(readonly, nonatomic) unsigned long long impressionValuesArray_Count; // @dynamic impressionValuesArray_Count;
@property(retain, nonatomic) NSMutableArray *selectedValuesArray; // @dynamic selectedValuesArray;
@property(readonly, nonatomic) unsigned long long selectedValuesArray_Count; // @dynamic selectedValuesArray_Count;
@property(retain, nonatomic) YTIUnpluggedBrowseFormData *unpluggedBrowseFormData; // @dynamic unpluggedBrowseFormData;
@property(retain, nonatomic) YTIVideoFilterFormData *videoFilterFormData; // @dynamic videoFilterFormData;

@end

