//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTStyledViewController.h>

#import <Module_Framework/YTMELocationPermissionsViewControllerDelegate-Protocol.h>

@class GIMMe, NSString;

@interface YTEditBaseMetadataViewController : YTStyledViewController <YTMELocationPermissionsViewControllerDelegate>
{
}

- (void)removeLocationPermissionsViewController:(id)arg1;
- (void)addLocationPermissionsViewController;
- (void)locationPermissionsControllerDidAcceptPermissions:(id)arg1;
- (void)locationPermissionsControllerDidTapCloseButton:(id)arg1;
- (void)requestLocationPermissionsForEditor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

