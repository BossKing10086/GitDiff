//
//  GitDiff
//  Git difference highlighter plugin.
//
//  Created by John Holdsworth on 26/07/2014.
//  Copyright (c) 2014 John Holdsworth. All rights reserved.
//

#import <Cocoa/Cocoa.h>

typedef NS_ENUM(NSInteger, GitDiffGutterType) {
    GitDiffGutterTypeDefault = 0,
    GitDiffGutterTypeMedium,
    GitDiffGutterTypeVerbose,
};

typedef NS_ENUM(NSInteger, GitDiffWrapNavigation) {
    GitDiffWrapNavigationDefault = 0,
    GitDiffWrapNavigationEnabled
};

@interface GitDiff : NSObject

@end
