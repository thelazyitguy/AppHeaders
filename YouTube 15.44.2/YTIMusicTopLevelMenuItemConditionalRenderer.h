//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTIMusicConditionVariables;

@interface YTIMusicTopLevelMenuItemConditionalRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInputs; // @dynamic hasInputs;
@property(retain, nonatomic) YTIMusicConditionVariables *inputs; // @dynamic inputs;
@property(retain, nonatomic) NSMutableArray *selectorsArray; // @dynamic selectorsArray;
@property(readonly, nonatomic) unsigned long long selectorsArray_Count; // @dynamic selectorsArray_Count;

@end

