//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MediaExtraPicker.h"

#import "UIDocumentPickerDelegate-Protocol.h"

@class NSString;

@interface GBTMediaLocalFilesExtraPicker : MediaExtraPicker <UIDocumentPickerDelegate>
{
}

+ (void)createMediaExtraPickerForMediaDataType:(unsigned long long)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)hasMediaExtraPickerForMediaDataType:(unsigned long long)arg1 client:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

