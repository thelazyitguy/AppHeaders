//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/NSObject-Protocol.h>

@class GMSNIncidentContentView, NSURL;

@protocol GMSNIncidentContentViewDelegate <NSObject>
- (void)didTapUrlInContentView:(GMSNIncidentContentView *)arg1 withUrl:(NSURL *)arg2;
- (void)didTapReportAProblemInContentView:(GMSNIncidentContentView *)arg1;
- (void)didTapAttributionInContentView:(GMSNIncidentContentView *)arg1;
- (void)didTapCancelInIncidentContentView:(GMSNIncidentContentView *)arg1;
@end
