//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Award, NSArray, UIImage;

@interface FreeAwards : NSObject
{
    // Error parsing type: , name: hasAwardToClaim
    // Error parsing type: , name: claimedAwards
    // Error parsing type: , name: claimedAwardToDisplay
    // Error parsing type: , name: claimedAwardImage
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithHasAwardToClaim:(_Bool)arg1 claimedAwards:(id)arg2 claimedAwardToDisplay:(id)arg3 claimedAwardImage:(id)arg4;
@property(nonatomic, readonly) UIImage *claimedAwardImage; // @synthesize claimedAwardImage;
@property(nonatomic, readonly) Award *claimedAwardToDisplay; // @synthesize claimedAwardToDisplay;
@property(nonatomic, readonly) NSArray *claimedAwards;
@property(nonatomic, readonly) _Bool hasAwardToClaim; // @synthesize hasAwardToClaim;

@end
