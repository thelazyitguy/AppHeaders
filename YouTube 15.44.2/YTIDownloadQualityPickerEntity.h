//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface YTIDownloadQualityPickerEntity : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(nonatomic) int dismissState; // @dynamic dismissState;
@property(retain, nonatomic) NSMutableArray *formatsArray; // @dynamic formatsArray;
@property(readonly, nonatomic) unsigned long long formatsArray_Count; // @dynamic formatsArray_Count;
@property(nonatomic) _Bool hasDismissState; // @dynamic hasDismissState;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasRememberSetting; // @dynamic hasRememberSetting;
@property(nonatomic) _Bool hasSelectedFormat; // @dynamic hasSelectedFormat;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(nonatomic) _Bool rememberSetting; // @dynamic rememberSetting;
@property(nonatomic) int selectedFormat; // @dynamic selectedFormat;

@end

