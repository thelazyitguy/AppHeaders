//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "A9VSBaseConfigManager.h"

@interface A9VSARConfigManager : A9VSBaseConfigManager
{
}

+ (id)sharedManager;
- (id)getARConfigURL;
- (id)configData;
- (id)getARConfigSettings;
- (void)downloadLatestConfigJSON:(CDUnknownBlockType)arg1;

@end
