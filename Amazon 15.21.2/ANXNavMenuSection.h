//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANXSectionHeader, NSArray;

@interface ANXNavMenuSection : NSObject
{
    ANXSectionHeader *_sectionHeader;
    NSArray *_menuItems;
}

@property(readonly, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(readonly, nonatomic) ANXSectionHeader *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
- (void).cxx_destruct;
- (id)initWithMenuItems:(id)arg1 sectionHeader:(id)arg2;

@end
