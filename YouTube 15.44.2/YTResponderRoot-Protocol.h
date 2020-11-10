//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTResponder-Protocol.h>

@class NSArray, YTResponderEvent;
@protocol MDXServices, YTDataServices, YTNavigationProtocol;

@protocol YTResponderRoot <YTResponder>
@property(readonly, nonatomic) NSArray *eventGroupHandlers;
@property(nonatomic) __weak id <MDXServices> MDXServices;
@property(nonatomic) __weak id <YTDataServices> dataServices;
@property(nonatomic) __weak id services;
@property(retain, nonatomic) id <YTNavigationProtocol> navigationProtocol;

@optional
- (void)handleUnhandledResponderEvent:(YTResponderEvent *)arg1;
- (void)setServicesForEventGroupHandlers;
- (void)addEventGroupHandlers:(NSArray *)arg1;
@end

