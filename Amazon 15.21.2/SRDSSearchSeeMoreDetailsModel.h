//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString;
@protocol Optional, SRDSSearchStyledTextModel><Optional;

@interface SRDSSearchSeeMoreDetailsModel : JSONModel
{
    NSString<Optional> *_style;
    NSArray<SRDSSearchStyledTextModel><Optional> *_buttonLabel;
    NSArray<SRDSSearchStyledTextModel><Optional> *_title;
    NSArray<SRDSSearchStyledTextModel><Optional> *_details;
}

@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *details; // @synthesize details=_details;
@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(retain, nonatomic) NSString<Optional> *style; // @synthesize style=_style;
- (void).cxx_destruct;

@end
