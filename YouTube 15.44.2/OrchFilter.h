//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, OrchUiField;

@interface OrchFilter : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionButtonArray; // @dynamic actionButtonArray;
@property(readonly, nonatomic) unsigned long long actionButtonArray_Count; // @dynamic actionButtonArray_Count;
@property(copy, nonatomic) NSString *addFilterPageTitle; // @dynamic addFilterPageTitle;
@property(copy, nonatomic) NSString *addFilterText; // @dynamic addFilterText;
@property(retain, nonatomic) NSMutableArray *filterCategoryArray; // @dynamic filterCategoryArray;
@property(readonly, nonatomic) unsigned long long filterCategoryArray_Count; // @dynamic filterCategoryArray_Count;
@property(nonatomic) _Bool hasAddFilterPageTitle; // @dynamic hasAddFilterPageTitle;
@property(nonatomic) _Bool hasAddFilterText; // @dynamic hasAddFilterText;
@property(nonatomic) _Bool hasSearchBar; // @dynamic hasSearchBar;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(retain, nonatomic) OrchUiField *searchBar; // @dynamic searchBar;
@property(nonatomic) long long uiReference; // @dynamic uiReference;

@end

