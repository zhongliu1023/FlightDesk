//
//  TextDisplayViewControllerDelegate.h
//  FastPdfKit
//
//  Created by Mac Book Pro on 28/02/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MFDocumentManager.h"

@class TextDisplayViewController;

@protocol TextDisplayViewControllerDelegate <NSObject>

-(MFDocumentManager	*)document;
-(void)dismissTextDisplayViewController:(TextDisplayViewController *)controller;

@end
