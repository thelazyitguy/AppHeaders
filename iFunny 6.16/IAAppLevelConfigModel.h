//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IA_JSONModel.h>

@class IADisplayConfigModel, IAMonitorConfigModel, IAVideoConfigModel, IAViewabilityConfigModel, NSString;
@protocol Optional;

@interface IAAppLevelConfigModel : IA_JSONModel
{
    IADisplayConfigModel<Optional> *_display;
    NSString *_appID;
    IAMonitorConfigModel<Optional> *_monitor;
    NSString *_publisherId;
    IAVideoConfigModel<Optional> *_video;
    IAViewabilityConfigModel<Optional> *_viewability;
}

+ (id)keyMapper;
- (void).cxx_destruct;
@property(retain, nonatomic) IAViewabilityConfigModel<Optional> *viewability; // @synthesize viewability=_viewability;
@property(retain, nonatomic) IAVideoConfigModel<Optional> *video; // @synthesize video=_video;
@property(retain, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
@property(retain, nonatomic) IAMonitorConfigModel<Optional> *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) IADisplayConfigModel<Optional> *display; // @synthesize display=_display;

@end
