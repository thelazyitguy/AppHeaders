//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/NSObject-Protocol.h>

@class GOOSheetContainerView;

@protocol GOOSheetContainerViewDelegate <NSObject>
- (void)sheetContainerViewDidHide:(GOOSheetContainerView *)arg1;

@optional
- (void)sheetContainerView:(GOOSheetContainerView *)arg1 sheetDidUpdateWithHeight:(double)arg2;
@end
