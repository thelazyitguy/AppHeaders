//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NITitleCellObject.h>

@class NSString;

@interface NISubtitleCellObject : NITitleCellObject
{
    NSString *_subtitle;
    long long _cellStyle;
}

+ (id)objectWithTitle:(id)arg1 subtitle:(id)arg2;
+ (id)objectWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
- (id)init;
- (id)initWithTitle:(id)arg1 image:(id)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 cellClass:(Class)arg4 userInfo:(id)arg5;

@end

