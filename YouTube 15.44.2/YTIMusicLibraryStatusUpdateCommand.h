//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIMusicEntityReference;

@interface YTIMusicLibraryStatusUpdateCommand : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *addToLibraryFeedbackToken; // @dynamic addToLibraryFeedbackToken;
@property(retain, nonatomic) YTIMusicEntityReference *entityReference; // @dynamic entityReference;
@property(nonatomic) _Bool hasAddToLibraryFeedbackToken; // @dynamic hasAddToLibraryFeedbackToken;
@property(nonatomic) _Bool hasEntityReference; // @dynamic hasEntityReference;
@property(nonatomic) _Bool hasLibraryStatus; // @dynamic hasLibraryStatus;
@property(nonatomic) int libraryStatus; // @dynamic libraryStatus;

@end

