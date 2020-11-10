//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class ASElementMap, ASRangeController, CALayer, NSHashTable, NSString;

@protocol ASRangeControllerDataSource <NSObject>
- (CALayer *)layerForRangeController:(ASRangeController *)arg1;
- (NSString *)nameForRangeControllerDataSource;
- (ASElementMap *)elementMapForRangeController:(ASRangeController *)arg1;
- (unsigned char)interfaceStateForRangeController:(ASRangeController *)arg1;
- (unsigned char)scrollDirectionForRangeController:(ASRangeController *)arg1;
- (NSHashTable *)visibleElementsForRangeController:(ASRangeController *)arg1;
@end

