//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDKPickerFilterCVO, GDKTheme, NSString;
@protocol GDKPickerFilesVCProducing;

@protocol GDKPickerFilter <NSObject>
- (GDKPickerFilterCVO *)filterCVOWithProducer:(id <GDKPickerFilesVCProducing>)arg1 viewControllerTitle:(NSString *)arg2 dynamicTypeEnabled:(_Bool)arg3 theme:(GDKTheme *)arg4;
@end
