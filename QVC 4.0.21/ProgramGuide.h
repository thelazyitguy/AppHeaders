//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ProgramGuide : NSObject
{
    NSString *allDayEventTitle;
    NSArray *shows;
    int *_currentCountry;
}

- (void).cxx_destruct;
@property(nonatomic) int *currentCountry; // @synthesize currentCountry=_currentCountry;
@property(retain, nonatomic) NSArray *shows; // @synthesize shows;
@property(retain, nonatomic) NSString *allDayEventTitle; // @synthesize allDayEventTitle;
- (id)initWithShowsListForFuture:(id)arg1 timeZone:(id)arg2;
- (id)initWithShowsList:(id)arg1 timeZone:(id)arg2 currentCountry:(int *)arg3;
- (void)setAllDayEventText:(id)arg1;

@end
