//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTDriveKitPickerResultProtocol-Protocol.h"

@class GDKPickerUserServices, NSString, UIViewController;
@protocol GBTGDKPicker, GDKFileFetcher, GDKFileMutating;

@interface GBTDriveKitPickerResult : NSObject <GBTDriveKitPickerResultProtocol>
{
    UIViewController<GBTGDKPicker> *_pickerVC;
    GDKPickerUserServices *_userServices;
    id <GDKFileFetcher> _fileFetcher;
    id <GDKFileMutating> _fileMutator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GDKFileMutating> fileMutator; // @synthesize fileMutator=_fileMutator;
@property(readonly, nonatomic) id <GDKFileFetcher> fileFetcher; // @synthesize fileFetcher=_fileFetcher;
@property(readonly, nonatomic) GDKPickerUserServices *userServices; // @synthesize userServices=_userServices;
@property(readonly, nonatomic) UIViewController<GBTGDKPicker> *pickerVC; // @synthesize pickerVC=_pickerVC;
- (id)initWithPickerVC:(id)arg1 userServices:(id)arg2 fileFetcher:(id)arg3 fileMutator:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
