//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDRhmiFeatureInfoFilter.h"

@class NSString;

@interface IDRhmiFeatureInfoSingleCategoryFilter : IDRhmiFeatureInfoFilter
{
    NSString *_hmiCategory;
}

+ (id)new;
- (void).cxx_destruct;
@property(retain) NSString *hmiCategory; // @synthesize hmiCategory=_hmiCategory;
- (id)apply:(id)arg1;
- (id)init;
- (id)initWithHmiCategory:(id)arg1;

@end

