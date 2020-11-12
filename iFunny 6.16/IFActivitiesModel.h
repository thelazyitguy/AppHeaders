//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFActivitiesModelProtocol-Protocol.h>

@class IFActivitiesViewController, NSString;
@protocol IFControllerProtocol, IFUserActivityModelProtocol, IFUserProtocol;

@interface IFActivitiesModel : NSObject <IFActivitiesModelProtocol>
{
    NSObject<IFUserProtocol> *_userInfo;
    NSObject<IFUserActivityModelProtocol> *_activities;
    IFActivitiesViewController<IFControllerProtocol> *_controller;
}

- (void).cxx_destruct;
@property(nonatomic) __weak IFActivitiesViewController<IFControllerProtocol> *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSObject<IFUserActivityModelProtocol> *activities; // @synthesize activities=_activities;
@property(retain, nonatomic) NSObject<IFUserProtocol> *userInfo; // @synthesize userInfo=_userInfo;
- (void)showStrikeWithId:(id)arg1 currentStrikesCount:(long long)arg2;
- (void)showBanWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
