//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/NSObject-Protocol.h>

@class GMSx_IVAnnotationsManager, GMSx_IVAssociatedFeature, NSArray;

@protocol IVAnnotationsManagerDelegate <NSObject>
- (void)annotationsManager:(GMSx_IVAnnotationsManager *)arg1 didSelectFeature:(GMSx_IVAssociatedFeature *)arg2 animated:(_Bool)arg3;
- (void)annotationsManager:(GMSx_IVAnnotationsManager *)arg1 loadedFeatures:(NSArray *)arg2;
@end
