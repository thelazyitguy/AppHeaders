//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QTMColorGroup;

@interface GWAInstrumentManagerOptions : NSObject
{
    _Bool _shouldCallCompletionHandlerBeforeDismiss;
    QTMColorGroup *_colorGroup;
    QTMColorGroup *_headerColorGroup;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldCallCompletionHandlerBeforeDismiss; // @synthesize shouldCallCompletionHandlerBeforeDismiss=_shouldCallCompletionHandlerBeforeDismiss;
@property(retain, nonatomic) QTMColorGroup *headerColorGroup; // @synthesize headerColorGroup=_headerColorGroup;
@property(retain, nonatomic) QTMColorGroup *colorGroup; // @synthesize colorGroup=_colorGroup;

@end
