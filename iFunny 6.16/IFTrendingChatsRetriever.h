//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IFTrendingChatsRetriever : NSObject
{
    _Bool _isBusy;
    _Bool _hasNext;
}

@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(nonatomic) _Bool isBusy; // @synthesize isBusy=_isBusy;
- (_Bool)retrieveWithCompletion:(CDUnknownBlockType)arg1;
- (void)reset;
- (id)chatsService;
- (id)init;

@end

