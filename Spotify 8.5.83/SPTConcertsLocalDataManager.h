//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLocalSettings;

@interface SPTConcertsLocalDataManager : NSObject
{
    id <SPTLocalSettings> _localSettings;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void)saveLastLocation:(id)arg1;
- (id)loadLastLocation;
- (id)initWithLocalSettings:(id)arg1;

@end

