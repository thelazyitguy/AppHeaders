//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AccordionOption.h"

@class NSString;

@interface SortOption : AccordionOption
{
    _Bool isSelected;
    NSString *name;
    NSString *sortValue;
    NSString *sortName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sortName; // @synthesize sortName;
- (void)setIsSelected:(_Bool)arg1;
- (_Bool)isSelected;
@property(retain, nonatomic) NSString *sortValue; // @synthesize sortValue;
- (void)setName:(id)arg1;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

