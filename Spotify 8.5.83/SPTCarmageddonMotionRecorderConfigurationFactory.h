//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTCarmageddonRemoteConfiguration;

@interface SPTCarmageddonMotionRecorderConfigurationFactory : NSObject
{
    id <SPTCarmageddonRemoteConfiguration> _remoteConfiguration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTCarmageddonRemoteConfiguration> remoteConfiguration; // @synthesize remoteConfiguration=_remoteConfiguration;
- (id)createDefaultCarDetectionConfiguration;
- (id)createDefaultTrainingConfiguration;
- (id)initWithRemoteConfiguration:(id)arg1;

@end

