//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IFChoiceSexModel : NSObject
{
    NSArray *_sexArray;
    long long _selectedIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(readonly, nonatomic) NSArray *sexArray; // @synthesize sexArray=_sexArray;
- (_Bool)validateIndex:(long long)arg1;
- (_Bool)updateSelectedIndex:(long long)arg1;
- (long long)sexCount;
- (id)sexAtIndex:(long long)arg1;
- (long long)currentIndex;
- (id)currentSex;
- (void)initSexArray;
- (id)initWithSelectedSex:(id)arg1;
- (id)init;

@end

